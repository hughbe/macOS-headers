//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFCalendarSubstitutableState;

@interface WFCalendarPickerParameter : WFEnumerationParameter
{
    BOOL _allowsAllCalendars;
    unsigned long long _entityType;
    id _defaultSerializedCalendarRepresentation;
    NSArray *_calendarStates;
    WFCalendarSubstitutableState *_allCalendarsState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WFCalendarSubstitutableState *allCalendarsState; // @synthesize allCalendarsState=_allCalendarsState;
@property(retain, nonatomic) NSArray *calendarStates; // @synthesize calendarStates=_calendarStates;
@property(retain, nonatomic) id defaultSerializedCalendarRepresentation; // @synthesize defaultSerializedCalendarRepresentation=_defaultSerializedCalendarRepresentation;
@property(readonly, nonatomic) unsigned long long entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) BOOL allowsAllCalendars; // @synthesize allowsAllCalendars=_allowsAllCalendars;
- (id)accessoryColorForPossibleState:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (id)defaultSerializedRepresentation;
- (void)reloadCalendars;
- (void)wasRemovedFromWorkflow;
- (void)wasAddedToWorkflow;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

