//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVMovie.h>

#import <AVFoundation/AVFragmentMinding-Protocol.h>

@class NSArray;

@interface AVFragmentedMovie : AVMovie <AVFragmentMinding>
{
}

+ (BOOL)expectsPropertyRevisedNotifications;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1;
@property(readonly, nonatomic, getter=isAssociatedWithFragmentMinder) BOOL associatedWithFragmentMinder;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (id)trackWithTrackID:(int)arg1;
@property(readonly, nonatomic) NSArray *tracks;
- (Class)_classForMovieTracks;
- (BOOL)_needsLegacyChangeNotifications;
- (BOOL)_mindsFragments;
- (id)initWithURL:(id)arg1 options:(id)arg2;

@end

