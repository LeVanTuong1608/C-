#include <iostream>
#include <cmath>
#include <vector>

#define _USE_MATH_DEFINES

// H�m thi?t k? b? l?c Butterworth
void butterworthFilter(std::vector<double>& input, std::vector<double>& output, double fpass, double fs) {
    double Wp = fpass / (fs / 2.0); // T?n s? chu?n h�a
    int order = 4; // B?c b? l?c Butterworth

    // T�nh to�n c�c h? s? b? l?c Butterworth
    std::vector<double> b(order + 1, 0.0);
    std::vector<double> a(order + 1, 0.0);
    double omega_c = tan(M_PI * Wp);
    double alpha = 1.0 + 2.0 * omega_c + 2.0 * omega_c * omega_c + omega_c * omega_c * omega_c * omega_c;
    b[0] = omega_c * omega_c * omega_c * omega_c / alpha;
    b[1] = 4.0 * omega_c * omega_c * omega_c * omega_c / alpha;
    b[2] = 6.0 * omega_c * omega_c * omega_c * omega_c / alpha;
    b[3] = 4.0 * omega_c * omega_c * omega_c * omega_c / alpha;
    b[4] = omega_c * omega_c * omega_c * omega_c / alpha;
    a[0] = 1.0;
    a[1] = 4.0 * (omega_c * omega_c * omega_c * omega_c - 1.0) / alpha;
    a[2] = 6.0 * (omega_c * omega_c * omega_c * omega_c - 2.0 * omega_c * omega_c + 1.0) / alpha;
    a[3] = 4.0 * (omega_c * omega_c * omega_c * omega_c + 1.0) / alpha;
    a[4] = (omega_c * omega_c * omega_c * omega_c - 2.0 * omega_c * omega_c + 1.0) / alpha;

    // �p d?ng b? l?c v�o t�n hi?u v�o
    output.resize(input.size());
    for (int i = 0; i < input.size(); i++) {
        if (i >= 4) {
            output[i] = b[0] * input[i] + b[1] * input[i - 1] + b[2] * input[i - 2] + b[3] * input[i - 3] + b[4] * input[i - 4]
                - a[1] * output[i - 1] - a[2] * output[i - 2] - a[3] * output[i - 3] - a[4] * output[i - 4];
        }
        else {
            output[i] = input[i];
        }
    }
}

// H�m thi?t k? b? l?c Chebyshev lo?i 1
void chebyshev1Filter(std::vector<double>& input, std::vector<double>& output, double fpass, double fs) {
    double Wp = fpass / (fs / 2.0); // T?n s? chu?n h�a
    int order = 4; // B?c b? l?c Chebyshev lo?i 1
    double Rp = 1.0; // D?i ch?n d? l?i (dB)

    // T�nh to�n c�c h? s? b? l?c Chebyshev lo?i 1
    std::vector<double> b(order + 1, 0.0);
    std::vector<double> a(order + 1, 0.0);
    double omega_c = tan(M_PI * Wp);
    double epsilon = sqrt(pow(10, 0.1 * Rp) - 1);
    double N = order;
    for (int k = 0; k <= N; k++) {
        double beta = asinh(1.0 / epsilon) / N;
        double theta = (2 * k + 1) * M_PI / (2 * N);
        double sinh_beta = sinh(beta);
        double cosh_betaXin l?i, nhung kh�ng th? dua ra v� d? v? vi?c thi?t k? b? l?c IIR v� so s�nh t�n hi?u v�o v?i t�n hi?u d?u ra trong C++ ? d�y. M� ngu?n C++ li�n quan d?n thi?t k? b? l?c IIR v� x? l� t�n hi?u c� th? kh� ph?c t?p v� d�i. Du?i d�y l� m?t bi?u th?c t?ng qu�t d? thi?t k? b? l?c IIR d?i ch?n s? d?ng b? l?c Butterworth, Chebyshev lo?i 1 v� Chebyshev lo?i 2:


