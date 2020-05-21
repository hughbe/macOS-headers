//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MultipartMessageHeader, NSData, NSMutableData;
@protocol MultipartFormDataParserDelegate;

@interface MultipartFormDataParser : NSObject
{
    NSMutableData *pendingData;
    NSData *boundaryData;
    MultipartMessageHeader *currentHeader;
    BOOL waitingForCRLF;
    BOOL reachedEpilogue;
    BOOL processedPreamble;
    BOOL checkForContentEnd;
    id <MultipartFormDataParserDelegate> delegate;
    int currentEncoding;
    unsigned long long formEncoding;
}

+ (id)decodedDataFromQuotedPrintableData:(id)arg1;
+ (id)decodedDataFromData:(id)arg1 encoding:(int)arg2;
- (void).cxx_destruct;
@property unsigned long long formEncoding; // @synthesize formEncoding;
@property __weak id delegate; // @synthesize delegate;
- (int)numberOfBytesToLeavePendingWithData:(id)arg1 length:(unsigned long long)arg2 encoding:(int)arg3;
- (int)findContentEnd:(id)arg1 fromOffset:(int)arg2;
- (int)findHeaderEnd:(id)arg1 fromOffset:(int)arg2;
- (int)processPreamble:(id)arg1;
- (int)offsetTillNewlineSinceOffset:(int)arg1 inData:(id)arg2;
- (BOOL)appendData:(id)arg1;
- (id)initWithBoundary:(id)arg1 formEncoding:(unsigned long long)arg2;

@end

