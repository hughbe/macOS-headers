//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHPersistentChangeToken;

@interface PGGraphUpdateManagerTargetTokenState : NSObject
{
    BOOL _encounteredTargetToken;
    PHPersistentChangeToken *_changeToken;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL encounteredTargetToken; // @synthesize encounteredTargetToken=_encounteredTargetToken;
@property(readonly, nonatomic) PHPersistentChangeToken *changeToken; // @synthesize changeToken=_changeToken;
- (id)description;
- (id)initWithPersistentChangeToken:(id)arg1;

@end

