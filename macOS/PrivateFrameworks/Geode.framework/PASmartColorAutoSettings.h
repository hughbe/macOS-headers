//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAAutoSettings.h>

@interface PASmartColorAutoSettings : IPAAutoSettings
{
    double _p75;
    double _p98;
    double _autoValue;
    double _g98;
}

@property(nonatomic) double g98; // @synthesize g98=_g98;
@property(nonatomic) double autoValue; // @synthesize autoValue=_autoValue;
@property(nonatomic) double p98; // @synthesize p98=_p98;
@property(nonatomic) double p75; // @synthesize p75=_p75;
- (BOOL)_applyArchiveDictionary:(id)arg1;
- (void)_archiveIntoDictionary:(id)arg1;
- (id)init;

@end

