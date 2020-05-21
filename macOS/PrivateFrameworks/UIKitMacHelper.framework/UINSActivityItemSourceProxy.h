//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitMacHelper/NSSharingServiceItemSource-Protocol.h>

@class NSOperation, NSString;
@protocol UINSActivityItemSource;

__attribute__((visibility("hidden")))
@interface UINSActivityItemSourceProxy : NSObject <NSSharingServiceItemSource>
{
    NSOperation *_operation;
    id <UINSActivityItemSource> _item;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <UINSActivityItemSource> item; // @synthesize item=_item;
- (id)sharingServicePicker:(id)arg1 thumbnailImageForSharingServiceName:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)sharingServicePicker:(id)arg1 dataTypeIdentifierForSharingServiceName:(id)arg2;
- (id)sharingServicePicker:(id)arg1 subjectForSharingServiceName:(id)arg2;
- (id)sharingServicePicker:(id)arg1 itemForSharingServiceName:(id)arg2;
- (id)sharingServicePickerPlaceholderItem:(id)arg1;
@property(readonly, nonatomic) NSOperation *operation;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

