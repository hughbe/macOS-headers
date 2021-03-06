//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableArray, NSString, WFAlertButton;
@protocol WFAlertPresenter;

@interface WFAlert : NSObject
{
    BOOL _prefersItemPickerSheetPresentation;
    NSString *_title;
    NSString *_message;
    long long _preferredStyle;
    NSArray *_textFieldResults;
    id <WFAlertPresenter> _presenter;
    NSMutableArray *_mutableButtons;
    NSMutableArray *_mutableTextFieldConfigurationHandlers;
}

+ (id)alertWithPreferredStyle:(long long)arg1;
+ (id)alertWithError:(id)arg1 confirmationHandler:(CDUnknownBlockType)arg2;
+ (id)alertWithError:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL prefersItemPickerSheetPresentation; // @synthesize prefersItemPickerSheetPresentation=_prefersItemPickerSheetPresentation;
@property(retain, nonatomic) NSMutableArray *mutableTextFieldConfigurationHandlers; // @synthesize mutableTextFieldConfigurationHandlers=_mutableTextFieldConfigurationHandlers;
@property(retain, nonatomic) NSMutableArray *mutableButtons; // @synthesize mutableButtons=_mutableButtons;
@property(nonatomic) __weak id <WFAlertPresenter> presenter; // @synthesize presenter=_presenter;
@property(copy, nonatomic) NSArray *textFieldResults; // @synthesize textFieldResults=_textFieldResults;
@property(nonatomic) long long preferredStyle; // @synthesize preferredStyle=_preferredStyle;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addTextFieldWithConfigurationHandler:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSArray *buttons;
- (void)addButton:(id)arg1;
- (id)init;
@property(readonly, nonatomic) WFAlertButton *escapeButton;
@property(readonly, nonatomic) NSArray *textFieldConfigurationHandlers;
@property(readonly, nonatomic) NSError *associatedError;

@end

