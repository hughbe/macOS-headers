//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

__attribute__((visibility("hidden")))
@interface BEAlertController : NSViewController
{
    BOOL _isBeingDismissed;
    BOOL _isSheet;
    int _style;
    id _actions;
    id _textFields;
}

+ (id)showTwoButtonSheetOnViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 button1Title:(id)arg4 button1Style:(int)arg5 button1Handler:(CDUnknownBlockType)arg6 button2Title:(id)arg7 button2Style:(int)arg8 button2Handler:(CDUnknownBlockType)arg9;
+ (id)showTwoButtonAlertWithTitle:(id)arg1 message:(id)arg2 button1Title:(id)arg3 button1Style:(int)arg4 button1Handler:(CDUnknownBlockType)arg5 button2Title:(id)arg6 button2Style:(int)arg7 button2Handler:(CDUnknownBlockType)arg8;
+ (id)showOneButtonSheetOnViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 buttonTitle:(id)arg4 buttonHandler:(CDUnknownBlockType)arg5;
+ (id)showOneButtonAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 buttonHandler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) id textFields; // @synthesize textFields=_textFields;
@property(readonly, nonatomic) id actions; // @synthesize actions=_actions;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) BOOL isSheet; // @synthesize isSheet=_isSheet;
@property(nonatomic) BOOL isBeingDismissed; // @synthesize isBeingDismissed=_isBeingDismissed;
- (id)textInFieldWithTag:(long long)arg1;
- (long long)textFieldCount;
- (id)textFieldWithTag:(long long)arg1;
- (long long)buttonCount;
- (id)buttonActionWithTag:(long long)arg1;
- (id)cancelButtonAction;
- (void)dismissWithActionForTag:(long long)arg1 animated:(BOOL)arg2;
- (void)dismissWithCancelActionAnimated:(BOOL)arg1;
- (void)dismissWithNoActionAnimated:(BOOL)arg1;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2 viewController:(id)arg3 arrowDirection:(int)arg4 animated:(BOOL)arg5;
- (void)showInView:(id)arg1 viewController:(id)arg2 animated:(BOOL)arg3;
- (void)showOnViewController:(id)arg1 animated:(BOOL)arg2;
- (void)showAnimated:(BOOL)arg1;
- (void)addAlertTextFieldWithTag:(long long)arg1 configurationBlock:(CDUnknownBlockType)arg2;
- (id)addAlertDestructiveButtonWithTitle:(id)arg1 tag:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (id)addAlertCancelButtonWithTitle:(id)arg1 tag:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (id)addAlertButtonWithTitle:(id)arg1 tag:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (id)addAlertButtonWithTitle:(id)arg1 style:(int)arg2 tag:(long long)arg3 action:(CDUnknownBlockType)arg4;
- (void)addAlertButton:(id)arg1;
- (id)initSheetWithTitle:(id)arg1 message:(id)arg2;
- (id)initAlertWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithStyle:(int)arg1 title:(id)arg2 message:(id)arg3;
- (void)viewDidDisappear:(BOOL)arg1;

@end

