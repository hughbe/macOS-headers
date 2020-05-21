//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IconServices/ISIcon.h>

@class NSCalendar, NSDate;
@protocol CUIKIconGenerator;

@interface CUIKIcon : ISIcon
{
    NSDate *_date;
    NSCalendar *_calendar;
    long long _format;
    id <CUIKIconGenerator> _iconGenerator;
    ISIcon *_isIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ISIcon *isIcon; // @synthesize isIcon=_isIcon;
@property(readonly, nonatomic) id <CUIKIconGenerator> iconGenerator; // @synthesize iconGenerator=_iconGenerator;
@property(readonly, nonatomic) long long format; // @synthesize format=_format;
@property(readonly, copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)getCGImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGImage *)CGImageForImageDescriptor:(id)arg1;
- (void)getImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)imageForImageDescriptor:(id)arg1;
- (void)prepareImagesForImageDescriptors:(id)arg1;
- (id)initWithDate:(id)arg1 calendar:(id)arg2 format:(long long)arg3;

@end

