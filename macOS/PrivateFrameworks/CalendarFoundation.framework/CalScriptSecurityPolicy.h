//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalScriptSecurityPolicy : NSObject
{
}

+ (BOOL)allowAuditToken:(CDStruct_6ad76789)arg1 forServiceType:(struct __CFString *)arg2;
+ (BOOL)allowAuditTokenOnCurrentAppleEventForServiceType:(struct __CFString *)arg1;
+ (BOOL)isWhiteListedCreateClassName:(id)arg1;
+ (BOOL)allowCreateCommandWithImplementationClassName:(id)arg1 forServiceType:(struct __CFString *)arg2;
+ (BOOL)isWhiteListedApplicationSelector:(SEL)arg1;
+ (BOOL)allowApplicationSelector:(SEL)arg1 forServiceType:(struct __CFString *)arg2;
+ (void)setErrorOnCurrentCommand;

@end

