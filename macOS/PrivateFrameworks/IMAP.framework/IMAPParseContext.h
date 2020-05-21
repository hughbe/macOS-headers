//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAPConnection, IMAPResponse, NSData;

@interface IMAPParseContext : NSObject
{
    const char *_start;
    const char *_end;
    BOOL _invalid;
    IMAPConnection *_connection;
    IMAPResponse *_response;
    NSData *_data;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL invalid; // @synthesize invalid=_invalid;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) IMAPResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) IMAPConnection *connection; // @synthesize connection=_connection;
- (id)_newBodystructure;
- (id)_newArrayAllowingNulls:(BOOL)arg1;
- (id)_newNamespaceExtension;
- (id)_newNamespace;
- (id)_newBodyData:(BOOL)arg1;
- (id)_newFlagsSet;
- (id)_newIDDictionary;
- (BOOL)_rangeWithoutStar:(struct _NSRange *)arg1;
- (id)_newMessageSetWithoutStar;
- (id)_newStatusAttList;
- (id)_newCapabilityArray;
- (id)_newArray;
- (id)_newMailboxWithSeparatorChar:(id)arg1;
- (id)_newAsString;
- (id)_newLiteral;
- (id)_newLiteralStringUsingCaseOption:(long long)arg1;
- (id)_newModificationSequenceValue;
- (BOOL)_modificationSequenceValue:(unsigned long long *)arg1;
- (id)_newNumber;
- (BOOL)_number:(unsigned int *)arg1;
- (id)_newNstring;
- (id)_newStringUsingCaseOption:(long long)arg1;
- (id)_newQuotedStringUsingCaseOption:(long long)arg1;
- (id)_newStringWithSingleQuotedCharacter;
- (id)_newIMAPAtom:(long long)arg1;
- (BOOL)_consumeSpaces;
- (void)_parseError:(id)arg1;
- (void)_parseWarning:(id)arg1;
- (void)_parseVanishedResponse;
- (void)_parseStatusResponse;
- (void)_parseSearchResponse;
- (void)_parseQuotaRootResponse;
- (void)_parseQuotaResponse;
- (void)_parseOtherResponse;
- (void)_parseNamespaceResponse;
- (void)_parseListResponse;
- (void)_parseIDResponse;
- (void)_parseFlagsResponse;
- (void)_parseFetchResponse;
- (void)_parseEnabledResponse;
- (void)_parseCapabilityResponse;
- (void)_parseBasicResponse;
- (void)_createResponseUsingMask:(unsigned long long)arg1;
- (void)_createResponseWithoutTag:(BOOL)arg1;
- (id)parseIntoResponse;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)initWithConnection:(id)arg1 data:(id)arg2;

@end

