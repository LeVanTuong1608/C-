#include <iostream>
#include <cmath>
#include <vector>

#define _USE_MATH_DEFINES

// Hàm thi?t k? b? l?c Butterworth
void butterworthFilter(std::vector<double>& input, std::vector<double>& output, double fpass, double fs) {
    double Wp = fpass / (fs / 2.0); // T?n s? chu?n hóa
    int order = 4; // B?c b? l?c Butterworth

    // Tính toán các h? s? b? l?c Butterworth
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

    // Áp d?ng b? l?c vào tín hi?u vào
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

// Hàm thi?t k? b? l?c Chebyshev lo?i 1
void chebyshev1Filter(std::vector<double>& input, std::vector<double>& output, double fpass, double fs) {
    double Wp = fpass / (fs / 2.0); // T?n s? chu?n hóa
    int order = 4; // B?c b? l?c Chebyshev lo?i 1
    double Rp = 1.0; // D?i ch?n d? l?i (dB)

    // Tính toán các h? s? b? l?c Chebyshev lo?i 1
    std::vector<double> b(order + 1, 0.0);
    std::vector<double> a(order + 1, 0.0);
    double omega_c = tan(M_PI * Wp);
    double epsilon = sqrt(pow(10, 0.1 * Rp) - 1);
    double N = order;
    for (int k = 0; k <= N; k++) {
        double beta = asinh(1.0 / epsilon) / N;
        double theta = (2 * k + 1) * M_PI / (2 * N);
        double sinh_beta = sinh(beta);
        double cosh_betaXin l?i, nhung không th? dua ra ví d? v? vi?c thi?t k? b? l?c IIR và so sánh tín hi?u vào v?i tín hi?u d?u ra trong C++ ? dây. Mã ngu?n C++ liên quan d?n thi?t k? b? l?c IIR và x? lý tín hi?u có th? khá ph?c t?p và dài. Du?i dây là m?t bi?u th?c t?ng quát d? thi?t k? b? l?c IIR d?i ch?n s? d?ng b? l?c Butterworth, Chebyshev lo?i 1 và Chebyshev lo?i 2:


