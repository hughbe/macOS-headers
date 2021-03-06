/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAssertionBase : NSObject <_UIAssertion> {
    bool  _initialState;
    _UIAssertionController * _parentController;
    NSString * _reason;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool initialState;
@property (nonatomic) _UIAssertionController *parentController;
@property (nonatomic, readonly) NSString *reason;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)_initWithType:(unsigned long long)arg1 initialState:(bool)arg2 reason:(id)arg3;
- (void)dealloc;
- (id)description;
- (bool)initialState;
- (id)parentController;
- (id)reason;
- (void)setParentController:(id)arg1;
- (unsigned long long)type;

@end
