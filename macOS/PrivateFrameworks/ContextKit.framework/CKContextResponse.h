//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContextKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSError, NSString;

@interface CKContextResponse : NSObject <NSSecureCoding>
{
    BOOL _discarded;
    double _hideCompletionsTimeLimit;
    _Atomic _Bool _shown;
    _Atomic _Bool _engaged;
    _Atomic _Bool _transactionSuccessful;
    _Atomic _Bool _logged;
    _Atomic unsigned int _loggingShownMax;
    _Atomic _Bool _loggingServerOverride;
    _Atomic unsigned int _loggingCouldHaveShownMax;
    _Atomic unsigned int _loggingInputLengthMax;
    BOOL _resultsNeedFiltering;
    NSString *_uuid;
    NSError *_error;
    NSArray *_results;
    NSArray *_level1Topics;
    NSArray *_level2Topics;
    NSString *_debug;
    unsigned long long _requestType;
    unsigned long long _mustPrefixMatchLength;
    NSDate *_hideCompletionsAfterDate;
    NSDate *_responseDate;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *responseDate; // @synthesize responseDate=_responseDate;
@property(retain, nonatomic) NSDate *hideCompletionsAfterDate; // @synthesize hideCompletionsAfterDate=_hideCompletionsAfterDate;
@property(nonatomic) unsigned long long mustPrefixMatchLength; // @synthesize mustPrefixMatchLength=_mustPrefixMatchLength;
@property(nonatomic) BOOL resultsNeedFiltering; // @synthesize resultsNeedFiltering=_resultsNeedFiltering;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSString *debug; // @synthesize debug=_debug;
@property(retain, nonatomic) NSArray *level2Topics; // @synthesize level2Topics=_level2Topics;
@property(retain, nonatomic) NSArray *level1Topics; // @synthesize level1Topics=_level1Topics;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)discardCompleter:(id)arg1;
- (void)logTransactionSuccessfulForInput:(id)arg1 completion:(id)arg2;
- (void)logEngagement:(id)arg1 forInput:(id)arg2 completion:(id)arg3;
- (void)logResultsShown:(unsigned long long)arg1 serverOverride:(BOOL)arg2 forInput:(id)arg3 couldHaveShown:(unsigned long long)arg4;
- (void)setHideCompletionsTimeLimit:(double)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)discard;
- (id)resultByQuery:(id)arg1;
- (id)completer;
- (void)addDebug:(id)arg1;
- (void)appendToDebug:(id)arg1;
- (BOOL)isPlaceholder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initPlaceholderWithUUID:(id)arg1 requestType:(unsigned long long)arg2;
- (id)initWithError:(id)arg1 requestType:(unsigned long long)arg2;
- (id)initWithResults:(id)arg1 requestType:(unsigned long long)arg2;

@end

