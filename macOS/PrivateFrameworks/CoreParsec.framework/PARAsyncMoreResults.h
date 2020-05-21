//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFMoreResults.h>

@class NSURL;

@interface PARAsyncMoreResults : SFMoreResults
{
    double _scale;
    NSURL *_moreResultsURL;
    unsigned long long _queryId;
    unsigned long long _clientQueryId;
}

+ (BOOL)supportsSecureCoding;
+ (id)moreResults:(id)arg1 label:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5 clientQueryId:(unsigned long long)arg6;
+ (id)moreResults:(id)arg1 label:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long clientQueryId; // @synthesize clientQueryId=_clientQueryId;
@property(readonly, nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(readonly, copy, nonatomic) NSURL *moreResultsURL; // @synthesize moreResultsURL=_moreResultsURL;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

