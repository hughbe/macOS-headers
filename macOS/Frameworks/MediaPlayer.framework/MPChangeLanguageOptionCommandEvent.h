//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class MPNowPlayingInfoLanguageOption;

@interface MPChangeLanguageOptionCommandEvent : MPRemoteCommandEvent
{
    MPNowPlayingInfoLanguageOption *_languageOption;
    long long _setting;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long setting; // @synthesize setting=_setting;
@property(readonly, nonatomic) MPNowPlayingInfoLanguageOption *languageOption; // @synthesize languageOption=_languageOption;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

