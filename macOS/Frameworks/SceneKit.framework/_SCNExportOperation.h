//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNExportOperation.h>

@class NSDictionary, NSError, NSURL, SCNNode, SCNRenderer, SCNScene;

__attribute__((visibility("hidden")))
@interface _SCNExportOperation : SCNExportOperation
{
    void *_userInfo;
    SEL _didEndSelector;
    SCNScene *_scene;
    struct CGSize _size;
    SCNNode *_pointOfView;
    double _startTime;
    double _endTime;
    double _systemTime;
    BOOL _canceled;
    BOOL _succeded;
    double _progress;
    NSError *_error;
    id _delegate;
    NSDictionary *_attributes;
    NSURL *_outputURL;
    SCNRenderer *_renderer;
    unsigned long long _antialiasingMode;
}

@property(nonatomic) BOOL succeded; // @synthesize succeded=_succeded;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) BOOL canceled; // @synthesize canceled=_canceled;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) SCNScene *scene; // @synthesize scene=_scene;
@property(nonatomic) SEL didEndSelector; // @synthesize didEndSelector=_didEndSelector;
@property(nonatomic) void *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) SCNRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) unsigned long long antialiasingMode; // @synthesize antialiasingMode=_antialiasingMode;
@property(retain, nonatomic) SCNNode *pointOfView; // @synthesize pointOfView=_pointOfView;
- (void)cancel;
- (void)dealloc;

@end

