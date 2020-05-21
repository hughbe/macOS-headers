//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSAttachment : ICSProperty
{
}

- (BOOL)shouldObscureValue;
@property(retain, nonatomic) NSString *x_apple_ews_attachmentid;
@property(retain, nonatomic) NSString *x_apple_filename;
@property(retain, nonatomic) NSString *managed_filename;
@property(nonatomic) BOOL x_apple_autoarchived;
@property(retain, nonatomic) NSString *fmtype;
@property(retain, nonatomic) NSString *managed_id;
@property(nonatomic) int size;
- (id)filename;
- (BOOL)isBinary;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setData:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

