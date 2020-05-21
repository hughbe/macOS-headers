//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFilterVerdict.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@interface NEFilterNewFlowVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>
{
    BOOL _filterInbound;
    BOOL _filterOutbound;
    long long _statisticsReportFrequency;
    unsigned long long _peekInboundBytes;
    unsigned long long _peekOutboundBytes;
}

+ (id)pauseVerdict;
+ (id)filterDataVerdictWithFilterInbound:(BOOL)arg1 peekInboundBytes:(unsigned long long)arg2 filterOutbound:(BOOL)arg3 peekOutboundBytes:(unsigned long long)arg4;
+ (id)URLAppendStringVerdictWithMapKey:(id)arg1;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2;
+ (id)dropVerdict;
+ (id)allowVerdict;
+ (id)needRulesVerdict;
+ (BOOL)supportsSecureCoding;
@property unsigned long long peekOutboundBytes; // @synthesize peekOutboundBytes=_peekOutboundBytes;
@property unsigned long long peekInboundBytes; // @synthesize peekInboundBytes=_peekInboundBytes;
@property BOOL filterOutbound; // @synthesize filterOutbound=_filterOutbound;
@property BOOL filterInbound; // @synthesize filterInbound=_filterInbound;
@property long long statisticsReportFrequency; // @synthesize statisticsReportFrequency=_statisticsReportFrequency;
- (long long)filterAction;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

