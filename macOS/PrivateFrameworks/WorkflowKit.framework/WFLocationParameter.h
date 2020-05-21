//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@interface WFLocationParameter : WFParameter
{
    BOOL _allowsTextOnlyLocations;
    BOOL _allowsCurrentLocation;
    BOOL _skipsProcessingCurrentLocation;
    BOOL _defaultToCurrentLocation;
}

@property(readonly, nonatomic) BOOL defaultToCurrentLocation; // @synthesize defaultToCurrentLocation=_defaultToCurrentLocation;
@property(readonly, nonatomic) BOOL skipsProcessingCurrentLocation; // @synthesize skipsProcessingCurrentLocation=_skipsProcessingCurrentLocation;
@property(readonly, nonatomic) BOOL allowsCurrentLocation; // @synthesize allowsCurrentLocation=_allowsCurrentLocation;
@property(readonly, nonatomic) BOOL allowsTextOnlyLocations; // @synthesize allowsTextOnlyLocations=_allowsTextOnlyLocations;
- (id)defaultSerializedRepresentation;
@property(readonly, nonatomic) double currentLocationAccuracy;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

