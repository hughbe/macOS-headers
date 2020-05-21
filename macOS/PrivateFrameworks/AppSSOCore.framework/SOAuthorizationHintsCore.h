//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppSSOCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface SOAuthorizationHintsCore : NSObject <NSSecureCoding>
{
    NSString *_localizedExtensionBundleDisplayName;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedExtensionBundleDisplayName; // @synthesize localizedExtensionBundleDisplayName=_localizedExtensionBundleDisplayName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedExtensionBundleDisplayName:(id)arg1;

@end

