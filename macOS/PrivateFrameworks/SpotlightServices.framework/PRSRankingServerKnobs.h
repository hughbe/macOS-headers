//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PRSRankingServerKnobs : NSObject
{
    BOOL _didGetKnobValues;
    BOOL _use_server_default_score;
    BOOL _text_features_demotion;
    BOOL _cook_sqf;
    BOOL _cook_sqf_topdown;
    BOOL _cook_sqf_fallback_qi_cep;
    long long _cat_score_enum;
    double _device_freq_factor;
    double _glance_support_factor;
    double _device_launch_factor;
    double _server_default_score;
    double _server_score_decrement;
    double _device_expert_factor;
    double _std_dev_threshold;
    double _std_dev_factor;
    double _top_server_score_factor;
    double _device_score_ratio;
    double _min_server_score;
    double _min_server_cep;
    double _min_device_cep;
    double _pseudo_zero_cep;
    double _min_unordered_span;
    long long _user_activity_promotion_threshold;
    long long _text_features_num_chars;
    long long _device_freq_window;
    long long _category_promotion_decay;
    double _category_promotion_count_weight;
    double _category_promotion_last_engaged_weight;
    long long _shortcut_window;
    double _min_coreduet_threshold;
}

@property double min_coreduet_threshold; // @synthesize min_coreduet_threshold=_min_coreduet_threshold;
@property BOOL cook_sqf_fallback_qi_cep; // @synthesize cook_sqf_fallback_qi_cep=_cook_sqf_fallback_qi_cep;
@property BOOL cook_sqf_topdown; // @synthesize cook_sqf_topdown=_cook_sqf_topdown;
@property BOOL cook_sqf; // @synthesize cook_sqf=_cook_sqf;
@property long long shortcut_window; // @synthesize shortcut_window=_shortcut_window;
@property double category_promotion_last_engaged_weight; // @synthesize category_promotion_last_engaged_weight=_category_promotion_last_engaged_weight;
@property double category_promotion_count_weight; // @synthesize category_promotion_count_weight=_category_promotion_count_weight;
@property long long category_promotion_decay; // @synthesize category_promotion_decay=_category_promotion_decay;
@property long long device_freq_window; // @synthesize device_freq_window=_device_freq_window;
@property BOOL text_features_demotion; // @synthesize text_features_demotion=_text_features_demotion;
@property long long text_features_num_chars; // @synthesize text_features_num_chars=_text_features_num_chars;
@property long long user_activity_promotion_threshold; // @synthesize user_activity_promotion_threshold=_user_activity_promotion_threshold;
@property double min_unordered_span; // @synthesize min_unordered_span=_min_unordered_span;
@property double pseudo_zero_cep; // @synthesize pseudo_zero_cep=_pseudo_zero_cep;
@property double min_device_cep; // @synthesize min_device_cep=_min_device_cep;
@property double min_server_cep; // @synthesize min_server_cep=_min_server_cep;
@property double min_server_score; // @synthesize min_server_score=_min_server_score;
@property double device_score_ratio; // @synthesize device_score_ratio=_device_score_ratio;
@property double top_server_score_factor; // @synthesize top_server_score_factor=_top_server_score_factor;
@property double std_dev_factor; // @synthesize std_dev_factor=_std_dev_factor;
@property double std_dev_threshold; // @synthesize std_dev_threshold=_std_dev_threshold;
@property double device_expert_factor; // @synthesize device_expert_factor=_device_expert_factor;
@property double server_score_decrement; // @synthesize server_score_decrement=_server_score_decrement;
@property double server_default_score; // @synthesize server_default_score=_server_default_score;
@property BOOL use_server_default_score; // @synthesize use_server_default_score=_use_server_default_score;
@property double device_launch_factor; // @synthesize device_launch_factor=_device_launch_factor;
@property double glance_support_factor; // @synthesize glance_support_factor=_glance_support_factor;
@property double device_freq_factor; // @synthesize device_freq_factor=_device_freq_factor;
@property long long cat_score_enum; // @synthesize cat_score_enum=_cat_score_enum;
@property BOOL didGetKnobValues; // @synthesize didGetKnobValues=_didGetKnobValues;
- (id)init;

@end

