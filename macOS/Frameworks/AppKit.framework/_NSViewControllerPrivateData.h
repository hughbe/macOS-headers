//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSStoryboard, NSString, NSViewController;

__attribute__((visibility("hidden")))
@interface _NSViewControllerPrivateData : NSObject
{
    NSViewController *_parentViewController;
    struct _NSModalSession *_modalSessionForPresentedViewController;
    NSMutableArray *_presentedViewControllers;
    NSMutableArray *_childViewControllers;
    long long _appearanceTransitionCount;
    NSArray *_segueTemplates;
    NSStoryboard *_storyboard;
    NSString *_identifier;
    NSDictionary *_externalObjectEntryTableForViewLoading;
    NSArray *_topLevelObjectsToKeepAliveFromStoryboard;
    CDUnknownBlockType _constrainServiceScreenFrameBlock;
    NSDictionary *_segueDestinationOptions;
    struct {
        unsigned int preventInsertAndRemoveChildViewControllersFromSendingKVO:1;
        unsigned int _sentViewWillAppear:1;
        unsigned int _sentViewWillDisappear:1;
        unsigned int _sentViewDidLoad:1;
        unsigned int _scheduledBridgedServiceLayoutPropertyChange:1;
        unsigned int _reserved:27;
    } _flags;
}

@property(copy) CDUnknownBlockType constrainServiceScreenFrameBlock; // @synthesize constrainServiceScreenFrameBlock=_constrainServiceScreenFrameBlock;
@property(retain) NSDictionary *segueDestinationOptions; // @synthesize segueDestinationOptions=_segueDestinationOptions;
@property(retain) NSArray *topLevelObjectsToKeepAliveFromStoryboard; // @synthesize topLevelObjectsToKeepAliveFromStoryboard=_topLevelObjectsToKeepAliveFromStoryboard;
@property(retain) NSDictionary *externalObjectEntryTableForViewLoading; // @synthesize externalObjectEntryTableForViewLoading=_externalObjectEntryTableForViewLoading;
@property(retain) NSStoryboard *storyboard; // @synthesize storyboard=_storyboard;
@property(retain) NSArray *segueTemplates; // @synthesize segueTemplates=_segueTemplates;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property long long appearanceTransitionCount; // @synthesize appearanceTransitionCount=_appearanceTransitionCount;
@property(retain) NSMutableArray *presentedViewControllers; // @synthesize presentedViewControllers=_presentedViewControllers;
@property(retain) NSMutableArray *childViewControllers; // @synthesize childViewControllers=_childViewControllers;
@property struct _NSModalSession *modalSessionForPresentedViewController; // @synthesize modalSessionForPresentedViewController=_modalSessionForPresentedViewController;
@property NSViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void)dealloc;

@end

