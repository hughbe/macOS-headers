//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PASampling/PASerializable-Protocol.h>

@class NSString, NSUUID, PASymbol, PASymbolOwner;

@interface PASymbolHandle : NSObject <PASerializable>
{
    PASymbol *_symbol;
    PASymbolOwner *_owner;
    unsigned long long _symbolOwnerStartAddressInTask;
}

+ (id)getEmptySymbolHandle;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
@property(readonly) unsigned long long symbolOwnerStartAddressInTask; // @synthesize symbolOwnerStartAddressInTask=_symbolOwnerStartAddressInTask;
- (BOOL)addToPersistentCache;
- (id)debugDescriptionForAddress:(unsigned long long)arg1;
@property(readonly, copy) NSString *debugDescription;
- (id)_initAsEmptyHandle;
- (id)initWithSymbol:(id)arg1 andSymbolOwnerStartAddress:(unsigned long long)arg2 andSymbolOwner:(id)arg3;
- (long long)compareInfoRichnessToSymbolHandle:(id)arg1 forAddress:(unsigned long long)arg2;
- (unsigned long long)sourceLengthForAddress:(unsigned long long)arg1;
- (unsigned long long)sourceStartAddressInTaskForAddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForAddress:(unsigned long long)arg1;
- (unsigned int)sourceColumnNumberForAddress:(unsigned long long)arg1;
- (id)sourceFileNameForAddress:(unsigned long long)arg1;
- (BOOL)hasSourceInformationForAddress:(unsigned long long)arg1;
- (id)_sourceInformationForAddress:(unsigned long long)arg1;
@property(readonly) NSString *symbolName;
@property(readonly) unsigned long long symbolStartAddressInTask;
@property(readonly) unsigned long long symbolLength;
@property(readonly) BOOL hasSymbol;
@property(readonly) NSString *symbolOwnerBinaryVersion;
@property(readonly) NSString *symbolOwnerBundleShortVersion;
@property(readonly) NSString *symbolOwnerBundleVersion;
@property(readonly) NSString *symbolOwnerBundleIdentifier;
@property(readonly) BOOL symbolOwnerIsTextExecSegment;
@property(readonly) unsigned long long symbolOwnerTextSegmentLength;
@property(retain) NSString *symbolOwnerPath;
@property(readonly) NSUUID *symbolOwnerUUID;
@property(readonly) NSString *symbolOwnerName;
@property(readonly) BOOL hasSymbolOwnerStartAddressInTask;
@property(readonly) BOOL hasSymbolOwner;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

