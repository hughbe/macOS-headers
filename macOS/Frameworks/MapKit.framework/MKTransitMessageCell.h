//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

#import <MapKit/MKMultiLineLabelContainer-Protocol.h>

@class NSString, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitMessageCell : MKCustomSeparatorTableViewCell <MKMultiLineLabelContainer>
{
    _MKUILabel *_messageLabel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *messageText;
- (id)multilineTextFieldsWithinContainer;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

