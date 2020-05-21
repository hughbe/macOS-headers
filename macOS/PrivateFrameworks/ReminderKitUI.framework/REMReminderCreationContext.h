//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKitUI/NSSecureCoding-Protocol.h>

@class CLLocation, NSAttributedString, NSData, NSDateComponents, NSString, NSURL, NSUserActivity;

@interface REMReminderCreationContext : NSObject <NSSecureCoding>
{
    BOOL _wantsExtendedDetailOnlyView;
    BOOL _titleIsGeneratedSuggestion;
    NSAttributedString *_title;
    NSAttributedString *_notes;
    NSDateComponents *_dueDateComponents;
    CLLocation *_location;
    NSString *_locationString;
    long long _locationProximity;
    NSURL *_url;
    NSData *_siriFoundInAppsData;
    NSUserActivity *_userActivity;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL titleIsGeneratedSuggestion; // @synthesize titleIsGeneratedSuggestion=_titleIsGeneratedSuggestion;
@property(nonatomic) BOOL wantsExtendedDetailOnlyView; // @synthesize wantsExtendedDetailOnlyView=_wantsExtendedDetailOnlyView;
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(copy, nonatomic) NSData *siriFoundInAppsData; // @synthesize siriFoundInAppsData=_siriFoundInAppsData;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) long long locationProximity; // @synthesize locationProximity=_locationProximity;
@property(copy, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSDateComponents *dueDateComponents; // @synthesize dueDateComponents=_dueDateComponents;
@property(copy, nonatomic) NSAttributedString *notes; // @synthesize notes=_notes;
@property(copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

