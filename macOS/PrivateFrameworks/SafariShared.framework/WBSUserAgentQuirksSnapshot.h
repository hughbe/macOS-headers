//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSRemotePlistSnapshot-Protocol.h>

@class NSDictionary, NSString;

@interface WBSUserAgentQuirksSnapshot : NSObject <WBSRemotePlistSnapshot>
{
    NSDictionary *_domainsToQuirkTypes;
    NSDictionary *_userAgentQuirks;
    NSDictionary *_sitesRequiringUserAgentQuirks;
}

- (void).cxx_destruct;
- (id)plistDataWithFormat:(unsigned long long)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)quirkTypeForDomain:(id)arg1;
- (id)initWithPlistData:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

