//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSEncodingDetector : NSObject
{
    unsigned long long _nsEncoding;
    unsigned int _cfEncoding;
    unsigned long long _givenNumBytes;
    unsigned long long _numChars;
    unsigned long long _numMultiByteChars;
    unsigned long long _numSingleBytechars;
    unsigned long long _skipBytes;
    unsigned long long _numZeroBytes;
    unsigned long long _mostFrqChars;
    unsigned long long _numBigrams;
    unsigned long long _numRep;
    unsigned long long _numDirect;
    unsigned long long _numBase64;
    unsigned long long _numSeq;
    unsigned long long _numTrigram;
    unsigned long long _numLower;
    unsigned long long _numHigher;
    double _weight;
    BOOL _hasBase64;
    BOOL _isBigEndian;
    BOOL _hasBOM;
    unsigned int _tag;
}

+ (id)detectorForCFStringEncoding:(unsigned int)arg1 allowBackupDetectors:(BOOL)arg2;
+ (Class)classForCFStringEncoding:(unsigned int)arg1;
@property(readonly) unsigned int cfEncoding; // @synthesize cfEncoding=_cfEncoding;
@property(readonly) unsigned long long nsEncoding; // @synthesize nsEncoding=_nsEncoding;
- (unsigned long long)recognizeString:(const char *)arg1 withDataLength:(unsigned long long)arg2 intoBuffer:(id)arg3;
- (double)multiBytesRatio;
- (double)confidenceWith2Chars;
- (double)confidence;
- (id)initWithNSStringEncoding:(unsigned long long)arg1 CFStringEncoding:(unsigned int)arg2;
- (unsigned long long)maxSkipBytes;
- (double)bytesRatio;
- (void)softReset;
- (void)reset;

@end

