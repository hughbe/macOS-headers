/* Generated by RuntimeBrowser.
 */

@protocol SCNCaptureDeviceOutputConsumer <NSObject>

@required

- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1 fromDevice:(AVCaptureDevice *)arg2;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 fromDevice:(AVCaptureDevice *)arg2;

@end
