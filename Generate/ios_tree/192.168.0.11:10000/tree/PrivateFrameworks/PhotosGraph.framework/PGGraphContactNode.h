/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphContactNode : PGGraphOptimizedNode {
    NSDate * _birthdayDate;
    NSString * _contactIdentifier;
    NSString * _name;
    NSDate * _potentialBirthdayDate;
}

@property (readonly) NSDate *birthdayDate;
@property (readonly) NSString *contactIdentifier;
@property (readonly) NSString *name;
@property (readonly) NSDate *potentialBirthdayDate;

- (void).cxx_destruct;
- (id)birthdayDate;
- (id)contactIdentifier;
- (id)description;
- (unsigned short)domain;
- (bool)hasProperties:(id)arg1;
- (id)init;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)label;
- (id)name;
- (id)potentialBirthdayDate;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)arg1;
- (unsigned long long)sexHintForGivenName;

@end
