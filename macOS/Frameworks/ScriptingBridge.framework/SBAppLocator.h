//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScriptingBridge/NSCoding-Protocol.h>

@interface SBAppLocator : NSObject <NSCoding>
{
    struct AEDesc _address;
    BOOL _isCurrentProcess;
    unsigned int _launchFlags;
}

- (id)description;
- (id)sdef;
- (BOOL)isCurrentProcess;
- (BOOL)isRunning;
- (id)bundleIdentifier;
- (id)name;
- (id)path;
- (id)processInformation;
- (void)resetAddress;
- (const struct AEDesc *)addressWithoutLaunching;
- (const struct AEDesc *)address;
- (const struct AEDesc *)launchWithFlags:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end

