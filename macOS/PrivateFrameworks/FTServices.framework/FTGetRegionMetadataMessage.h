//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSBaseMessage.h>

#import <FTServices/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>
{
    NSString *_language;
    NSDictionary *_responseRegionInformation;
}

- (void).cxx_destruct;
@property(copy) NSDictionary *responseRegionInformation; // @synthesize responseRegionInformation=_responseRegionInformation;
@property(copy) NSString *language; // @synthesize language=_language;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (BOOL)wantsHTTPGet;
- (long long)responseCommand;
- (long long)command;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsBagKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

