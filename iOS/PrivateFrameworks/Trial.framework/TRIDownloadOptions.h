/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

@interface TRIDownloadOptions : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> * _activity;
    bool  _allowsCellularAccess;
    unsigned long long  _discretionaryBehavior;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *activity;
@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic) unsigned long long discretionaryBehavior;

+ (id)defaultOptions;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activity;
- (bool)allowsCellularAccess;
- (id)description;
- (unsigned long long)discretionaryBehavior;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initFromPersistedBehavior:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)serializeToPersistedBehavior;
- (void)setActivity:(id)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setDiscretionaryBehavior:(unsigned long long)arg1;

@end
