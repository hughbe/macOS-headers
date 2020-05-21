//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BoardServices/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol NSFastEnumeration, OS_xpc_object;

@protocol BSXPCEncoding <NSObject>
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(NSString *)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(NSString *)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(NSString *)arg2;
- (void)encodeDouble:(double)arg1 forKey:(NSString *)arg2;
- (void)encodeCGRect:(struct CGRect)arg1 forKey:(NSString *)arg2;
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(NSString *)arg2;
- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(NSString *)arg2;
- (void)encodeXPCObject:(NSObject<OS_xpc_object> *)arg1 forKey:(NSString *)arg2;
- (void)encodeCollection:(NSObject<NSFastEnumeration> *)arg1 forKey:(NSString *)arg2;
- (void)encodeObject:(NSObject *)arg1 forKey:(NSString *)arg2;
@end

