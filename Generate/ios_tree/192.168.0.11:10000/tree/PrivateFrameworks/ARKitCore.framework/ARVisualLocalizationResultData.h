/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
 */

@interface ARVisualLocalizationResultData : NSObject <ARDaemonSecureCoding, ARResultData> {
    VLLocalizationDebugInfo * _debugInfo;
    long long  _errorCode;
    double  _heading;
    ARLocationData * _inputLocation;
    VLLocalizationResult * _localizationResult;
    CLLocation * _location;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) VLLocalizationDebugInfo *debugInfo;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long errorCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double heading;
@property (nonatomic, readonly) VLLocalizationResult *localizationResult;
@property (nonatomic, retain) CLLocation *location;
@property (getter=isSecure, nonatomic, readonly) bool secure;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugInfo;
- (void)encodeWithCoder:(id)arg1;
- (long long)errorCode;
- (double)heading;
- (id)initWithCoder:(id)arg1;
- (id)initWithVLLocalizationResult:(id)arg1 errorCode:(long long)arg2 debugInfo:(id)arg3 heading:(double)arg4 inputLocation:(id)arg5;
- (bool)isSecure;
- (id)localizationResult;
- (id)location;
- (void)setErrorCode:(long long)arg1;
- (void)setLocation:(id)arg1;
- (double)timestamp;

@end
