//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABSafeNotificationSignature.h"

@class NSNotificationCenter, NSString;

__attribute__((visibility("hidden")))
@interface ABSafeNotificationSignature : NSObject <ABSafeNotificationSignature>
{
    NSNotificationCenter *_center;
    NSString *_name;
    id _object;
}

+ (unsigned long long)signatureCodeForName:(id)arg1 object:(id)arg2;
@property id object; // @synthesize object=_object;
@property(copy) NSString *name; // @synthesize name=_name;
@property(retain) NSNotificationCenter *center; // @synthesize center=_center;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (unsigned long long)signatureCode;
- (void)stopObservingWithTarget:(id)arg1;
- (void)startObservingWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNotificationCenter:(id)arg1 name:(id)arg2 object:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

