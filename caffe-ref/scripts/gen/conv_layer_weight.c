/* Example convolution layer weights and biases*/
#include "conv_layer_weight.h"

const float conv1_weights[CONV1_NO_OUTPUTS][CONV1_NO_INPUTS*CONV1_FILTER_HEIGHT*CONV1_FILTER_WIDTH] = {
{0.006809, -0.012443, 0.004856, 0.006220, -0.020455, 0.011641, -0.001881, -0.008300, 0.003214, 0.006926, -0.000590, -0.003991, -0.004187, -0.013609, 0.006191, 0.003577, -0.000816, 0.000688, 0.002294, 0.006395, 0.000387, -0.002392, 0.005373, -0.013321, -0.021662, 0.007368, 0.004627, 0.007661, -0.005001, -0.010566, -0.002421, 0.008394, 0.002778, -0.011738, 0.008245, -0.020921, -0.000495, 0.011129, 0.004783, -0.010356, 0.002028, -0.004322, 0.010928, 0.004258, -0.005719, -0.016251, 0.018676, 0.022466, -0.001285, -0.019688, 0.018175, -0.006724, 0.008583, -0.010173, -0.010818, 0.024374, -0.010175, -0.020669, 0.019901, 0.020579, 0.000746, -0.003279, 0.004576, 0.022080, -0.000085, -0.013779, -0.007732, 0.006556, -0.013751, -0.013978, 0.011998, 0.008602, -0.012671, -0.020285, -0.011217},
{-0.002222, -0.019089, 0.001219, -0.005953, 0.008391, -0.005177, -0.003758, -0.008583, -0.013960, -0.003362, 0.009278, 0.002412, 0.021396, 0.028592, -0.013545, 0.015994, -0.017006, -0.004420, 0.009603, -0.009426, 0.007576, -0.008911, -0.007006, -0.002158, 0.004457, 0.009764, 0.017530, -0.012817, 0.014182, -0.000837, -0.008191, 0.004116, -0.005035, 0.009475, 0.005546, 0.003769, -0.004907, 0.007770, 0.005404, -0.009119, 0.010136, 0.020180, -0.014350, -0.009550, 0.018080, -0.003631, -0.007219, 0.002036, 0.003100, -0.000323, 0.000675, -0.000153, -0.005556, -0.012348, 0.011141, -0.013891, -0.006943, 0.002718, -0.000613, -0.016361, 0.001883, 0.001068, -0.001164, 0.019167, 0.001089, -0.002679, -0.000768, 0.015201, -0.009807, 0.002205, 0.004587, -0.000415, 0.015377, 0.003728, 0.004721},
{-0.011731, -0.000337, -0.013672, 0.004759, -0.013399, 0.002302, -0.019070, 0.004190, -0.010151, 0.011781, -0.013001, 0.003278, 0.007276, 0.012242, -0.008149, -0.010321, -0.004948, 0.002734, -0.018804, -0.001128, 0.003461, -0.016881, 0.011908, 0.009691, 0.017108, 0.003483, -0.001824, 0.015172, -0.005764, -0.002595, -0.012166, -0.013864, -0.008089, -0.009491, 0.007058, -0.006188, 0.014088, -0.010089, -0.010399, -0.000811, 0.002347, 0.006776, -0.008673, 0.013696, 0.003698, -0.007821, -0.003092, 0.015245, -0.002629, -0.002244, 0.000226, -0.005618, -0.011736, 0.008309, -0.006469, 0.006094, -0.004477, 0.020213, 0.005307, -0.006545, -0.013278, 0.014330, -0.001794, 0.001471, -0.024387, 0.019153, -0.009354, -0.001730, -0.015399, 0.003686, -0.015896, 0.007348, 0.001001, 0.005529, -0.022538},
{0.002607, -0.015714, 0.016157, -0.005258, 0.001844, 0.002424, 0.010447, 0.003489, -0.002893, -0.007883, 0.003051, 0.007246, 0.008620, 0.003527, -0.010355, 0.012686, 0.012523, 0.020017, -0.001193, 0.002567, 0.007737, 0.009773, 0.006864, 0.015271, -0.002282, 0.006630, 0.006218, 0.008980, 0.004418, 0.005862, 0.007801, -0.007693, 0.003358, -0.008704, 0.009652, -0.005028, -0.016141, -0.002736, 0.009206, -0.009653, 0.014664, -0.001381, -0.011318, 0.000902, 0.013911, 0.009612, 0.000645, 0.001522, -0.010142, 0.011074, -0.015961, 0.012197, 0.022694, 0.008083, 0.003132, -0.012915, 0.016954, -0.000582, -0.002037, 0.008154, -0.001279, 0.002279, 0.019898, 0.013667, -0.000653, -0.021211, 0.003598, 0.011768, 0.004043, -0.006682, -0.017292, 0.012733, -0.019312, 0.010067, 0.013892},
{0.009095, -0.012516, -0.003442, -0.021464, -0.006686, 0.000807, -0.003363, 0.003660, -0.012922, 0.008332, 0.029181, 0.001050, -0.001944, -0.001399, -0.005231, -0.000474, 0.002284, -0.003540, 0.011466, 0.016332, 0.001784, -0.003957, -0.006718, -0.005188, -0.001491, -0.007422, -0.004207, -0.001910, -0.011190, 0.002939, 0.002276, -0.014166, -0.002779, 0.005053, -0.006881, -0.007562, 0.002225, 0.012955, -0.013991, -0.012645, 0.000435, 0.001973, -0.007670, -0.018130, 0.014691, 0.019931, 0.008785, -0.008195, 0.006585, -0.002715, 0.022637, -0.006850, 0.013720, -0.011077, 0.018191, 0.010644, 0.001884, 0.008029, 0.011526, -0.011609, 0.000600, 0.006044, 0.001427, 0.000984, -0.001250, -0.021329, -0.003786, -0.028560, -0.020078, 0.001456, 0.006685, 0.003416, -0.011293, -0.009781, 0.008527}
};

const float conv1_bias[CONV1_NO_OUTPUTS] = {
0.000000, 0.000000, 0.000000, 0.000000, 0.000000};
