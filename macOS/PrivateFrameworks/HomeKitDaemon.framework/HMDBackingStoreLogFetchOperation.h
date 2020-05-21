//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@interface HMDBackingStoreLogFetchOperation : HMDBackingStoreOperation
{
    CDUnknownBlockType _fetchBlock;
    id _sentinal;
    long long _maskValue;
    long long _compareValue;
}

- (void).cxx_destruct;
@property(nonatomic) long long compareValue; // @synthesize compareValue=_compareValue;
@property(nonatomic) long long maskValue; // @synthesize maskValue=_maskValue;
@property(retain, nonatomic) id sentinal; // @synthesize sentinal=_sentinal;
@property(copy, nonatomic) CDUnknownBlockType fetchBlock; // @synthesize fetchBlock=_fetchBlock;
- (id)mainReturningError;
- (id)initWithSentinal:(id)arg1 alreadyPushedTo:(unsigned long long)arg2 fetchResult:(CDUnknownBlockType)arg3;
- (id)initWithAlreadyPushedTo:(unsigned long long)arg1 result:(CDUnknownBlockType)arg2;
- (id)initWithSentinal:(id)arg1 needsPushTo:(unsigned long long)arg2 fetchResult:(CDUnknownBlockType)arg3;
- (id)initWithNeedsPushTo:(unsigned long long)arg1 result:(CDUnknownBlockType)arg2;
- (id)initWithSentinal:(id)arg1 mask:(long long)arg2 compare:(long long)arg3 fetchResult:(CDUnknownBlockType)arg4;

@end

