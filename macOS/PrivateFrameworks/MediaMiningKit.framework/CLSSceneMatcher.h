//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CLSSceneMatcher : NSObject
{
    NSMutableDictionary *_confidenceThresholdBySceneIdentifierBySceneLabel;
}

+ (id)confidenceThresholdTypeBySceneLabel;
+ (id)sceneNameBySceneLabel;
+ (id)whiteboardSceneNames;
+ (id)interestingSceneNames;
+ (id)childTeenAndAdultSceneNames;
+ (id)babyAndPetSceneNames;
+ (id)babyChildTeenAdultAndPetSceneNames;
+ (id)junkSceneNamesLegacy;
+ (id)junkSceneNames;
+ (id)sharedSceneMatcher;
- (void).cxx_destruct;
- (id)confidenceThresholdBySceneIdentifierForSceneLabel:(id)arg1;

@end

