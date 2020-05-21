//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDateFormatter, NSDecimalNumber, NSMutableArray, NSMutableDictionary, PKAccount, PKAccountServiceAccountResolutionCofiguration;

@interface PKBillPaymentSuggestedAmountController : NSObject
{
    NSDateFormatter *_monthAndDayFormatter;
    NSDateFormatter *_monthFormatter;
    NSDecimalNumber *_currentStatementPaymentsSum;
    NSDecimalNumber *_previousStatementPaymentsSum;
    NSDecimalNumber *_statementPurchasesSum;
    NSMutableDictionary *_merchantCategoryTransactionSums;
    BOOL _isOnPlanCompletion;
    BOOL _isOnPaymentPlan;
    BOOL _currentStatementIsLastMonthsStatement;
    BOOL _isMonthZero;
    BOOL _isMonthOne;
    PKAccountServiceAccountResolutionCofiguration *_configuration;
    long long _numberOfActiveInstallments;
    long long _numberOfActiveStatementedInstallments;
    NSMutableArray *_differentialPrivacyFeatures;
    PKAccount *_account;
    NSArray *_currentStatementSelectedSuggestedAmountEvents;
    NSArray *_previousStatementSelectedSuggestedAmountEvents;
    NSArray *_approvedTransactionsPurchasesSinceStatement;
    NSArray *_approvedTransactionsBillPaymentSinceStatement;
    NSArray *_approvedTransactionsPurchasesForPreviousStatement;
    NSArray *_approvedTransactionsBillPaymentForPreviousStatement;
}

+ (void)previousStatementSelectedSuggestedAmountEventsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)currentStatementSelectedSuggestedAmountEventsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_approvedTransactionsForPreviousStatementForAccount:(id)arg1 transactionType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_approvedTransactionsSinceStatementForAccount:(id)arg1 transactionType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)approvedTransactionsPurchasesSinceStatementForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)approvedTransactionsPurchasesForPreviousStatementForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)approvedTransactionsBillPaymentForPreviousStatementForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)approvedTransactionsBillPaymentSinceStatementForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)defaultControllerForAccount:(id)arg1 paymentPass:(id)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *approvedTransactionsBillPaymentForPreviousStatement; // @synthesize approvedTransactionsBillPaymentForPreviousStatement=_approvedTransactionsBillPaymentForPreviousStatement;
@property(readonly, nonatomic) NSArray *approvedTransactionsPurchasesForPreviousStatement; // @synthesize approvedTransactionsPurchasesForPreviousStatement=_approvedTransactionsPurchasesForPreviousStatement;
@property(readonly, nonatomic) NSArray *approvedTransactionsBillPaymentSinceStatement; // @synthesize approvedTransactionsBillPaymentSinceStatement=_approvedTransactionsBillPaymentSinceStatement;
@property(readonly, nonatomic) NSArray *approvedTransactionsPurchasesSinceStatement; // @synthesize approvedTransactionsPurchasesSinceStatement=_approvedTransactionsPurchasesSinceStatement;
@property(readonly, nonatomic) NSArray *previousStatementSelectedSuggestedAmountEvents; // @synthesize previousStatementSelectedSuggestedAmountEvents=_previousStatementSelectedSuggestedAmountEvents;
@property(readonly, nonatomic) NSArray *currentStatementSelectedSuggestedAmountEvents; // @synthesize currentStatementSelectedSuggestedAmountEvents=_currentStatementSelectedSuggestedAmountEvents;
@property(readonly, nonatomic) PKAccount *account; // @synthesize account=_account;
- (id)differentialPrivacyFeaturesAsString;
- (void)recordPaymentActionWithDifferentialPrivacy:(unsigned long long)arg1;
- (void)_setDifferentialPrivacyFeature:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)_initializeDifferentialPrivacy:(id)arg1 accountSummary:(id)arg2;
- (BOOL)_calculateCurrentStatementIsLastMonthsStatement;
- (id)_filterSuggestions:(id)arg1 belowThreshold:(id)arg2;
- (id)_planCompletionTitleString;
- (id)_remainingStatementBalanceGapDescriptionText;
- (id)_remainingStatementBalanceGapTitleText;
- (id)_remainingStatementBalanceMessageString;
- (id)_remainingStatementBalanceTitleString;
- (id)_messageForSuggestion:(id)arg1;
- (id)_titleForSuggestion:(id)arg1;
- (BOOL)_categoryIsCurrentBalanceType:(unsigned long long)arg1;
- (BOOL)_categoryIsPaymentPlan:(unsigned long long)arg1;
- (BOOL)_suggestedAmountListIsValidAfterPurgeIfNecessary:(id)arg1;
- (id)_calculateThresholdForLastPaymentCategory:(unsigned long long)arg1 statementBalance:(id)arg2 suggestedAmountWithSameCategory:(id)arg3;
- (id)_suggestedAmountsForPayOffDateForStatementBalance:(id)arg1 creditUtilization:(id)arg2 lastPaymentCategory:(unsigned long long)arg3;
- (void)_minimumMerchcantCategoriesAboveMinimumAmount:(id)arg1 minMerchantCategory1:(long long *)arg2 minMerchantCategory2:(long long *)arg3 minMerchantCategorySum1:(id *)arg4 minMerchantCategorySum2:(id *)arg5;
- (BOOL)_allMandatoryValuesAreSameAmount;
- (void)_populatePriorityValuesForList:(id)arg1;
- (void)_populateStringValuesForList:(id)arg1;
- (void)_zerothOrFirstMonthBillPaymentSuggestionsForList:(id)arg1;
- (void)_generateAmountSuggestionListUsingTransactionHistoryForList:(id)arg1;
- (id)generateAmountSuggestionList;
- (id)_createDefaultAmountSuggestionListFromAccount;
- (id)initWithAccount:(id)arg1 currentStatementSelectedSuggestedAmountEvents:(id)arg2 previousStatementSelectedSuggestedAmountEvents:(id)arg3 approvedTransactionsPurchasesSinceStatement:(id)arg4 approvedTransactionsPurchasesForPreviousStatement:(id)arg5 approvedTransactionsBillPaymentSinceStatement:(id)arg6 approvedTransactionsBillPaymentForPreviousStatement:(id)arg7 configuration:(id)arg8;

@end

