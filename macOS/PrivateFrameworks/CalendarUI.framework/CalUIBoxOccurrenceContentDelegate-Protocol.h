//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/NSObject-Protocol.h>

@class CalUIBoxOccurrenceContentView, NSDate, NSFont, NSImage, NSView;

@protocol CalUIBoxOccurrenceContentDelegate <NSObject>
- (NSView *)dayGridView;
- (double)yValueInDayGridForDate:(NSDate *)arg1;

@optional
- (BOOL)occurrenceWantsTentativeAppearance:(CalUIBoxOccurrenceContentView *)arg1;
- (NSImage *)customImageForNewDot;
- (BOOL)shouldShowNewDotForOccurrence:(CalUIBoxOccurrenceContentView *)arg1;
- (long long)myParticipantStatus;
- (NSFont *)timeZoneFont;
- (NSFont *)timeFont;
- (NSFont *)titleFont;
- (NSFont *)locationFont;
- (BOOL)isProposal;
- (BOOL)shouldAlwaysShowColorBar;
- (BOOL)shouldShowTime;
- (long long)backgroundStyle;
- (double)currentYInDayGridForOccurrence:(CalUIBoxOccurrenceContentView *)arg1;
- (double)properYInDayGridForOccurrence:(CalUIBoxOccurrenceContentView *)arg1;
- (BOOL)shouldDragCompletionProposeNewTime;
- (BOOL)occurrenceBeginsOnThisDate;
- (BOOL)shouldOccurrenceInsetForEnclosingScrollView:(CalUIBoxOccurrenceContentView *)arg1;
- (BOOL)shouldOccurrenceShowStartEndTime:(CalUIBoxOccurrenceContentView *)arg1;
- (BOOL)shouldOccurrenceShowTravelTime:(CalUIBoxOccurrenceContentView *)arg1;
- (BOOL)shouldOccurrenceDrawDimmed:(CalUIBoxOccurrenceContentView *)arg1;
- (BOOL)shouldOccurrenceDrawSelected:(CalUIBoxOccurrenceContentView *)arg1;
- (NSDate *)endDateForOccurrence:(CalUIBoxOccurrenceContentView *)arg1;
- (NSDate *)startDateForOccurrence:(CalUIBoxOccurrenceContentView *)arg1;
@end

