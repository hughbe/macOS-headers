//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/NSSecureCoding-Protocol.h>

@interface SFSafariExtensionState : NSObject <NSSecureCoding>
{
    BOOL _enabled;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabledState:(BOOL)arg1;

@end

