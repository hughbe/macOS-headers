//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFilterNewFlowVerdict.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@interface NEFilterControlVerdict : NEFilterNewFlowVerdict <NSSecureCoding, NSCopying>
{
    BOOL _updateRules;
    BOOL _handledByDataProvider;
}

+ (id)updateRules;
+ (id)dropVerdictWithUpdateRules:(BOOL)arg1;
+ (id)allowVerdictWithUpdateRules:(BOOL)arg1;
+ (BOOL)supportsSecureCoding;
@property BOOL handledByDataProvider; // @synthesize handledByDataProvider=_handledByDataProvider;
@property BOOL updateRules; // @synthesize updateRules=_updateRules;
- (long long)filterAction;
- (id)init;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

