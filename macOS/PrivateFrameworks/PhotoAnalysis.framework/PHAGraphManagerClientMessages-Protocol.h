//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class PGManager, PHAGraphManager;

@protocol PHAGraphManagerClientMessages

@optional
- (void)graphBecameReady:(PGManager *)arg1 forPHAGraphManager:(PHAGraphManager *)arg2;
- (void)photoAnalysisGraphManager:(PHAGraphManager *)arg1 graphIsConsistent:(BOOL)arg2;
- (void)photoAnalysisGraphManager:(PHAGraphManager *)arg1 graphUpdateMadeProgress:(double)arg2;
@end

