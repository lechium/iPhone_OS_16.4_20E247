//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, CNMutableContact, CNPolicy, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupsDataSource : NSObject
{
    NSDictionary *_propertyGroups;	// 8 = 0x8
    CNMutableContact *_mutableContact;	// 16 = 0x10
    CNContactStore *_contactStore;	// 24 = 0x18
    CNPolicy *_policy;	// 32 = 0x20
    NSDictionary *_linkedPoliciesByContactIdentifier;	// 40 = 0x28
    NSArray *_prohibitedPropertyKeys;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000024720d
@property(retain, nonatomic) NSArray *prohibitedPropertyKeys; // @synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys;
@property(retain, nonatomic) NSDictionary *linkedPoliciesByContactIdentifier; // @synthesize linkedPoliciesByContactIdentifier=_linkedPoliciesByContactIdentifier;
@property(retain, nonatomic) CNPolicy *policy; // @synthesize policy=_policy;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNMutableContact *mutableContact; // @synthesize mutableContact=_mutableContact;
@property(retain, nonatomic) NSDictionary *propertyGroups; // @synthesize propertyGroups=_propertyGroups;
- (id)allDisplayPropertyItemsFromGroups:(id)arg1;	// IMP=0x0000000000246eb4
- (id)allDisplayPropertyItemsForPropertyKeys:(id)arg1;	// IMP=0x0000000000246e55
- (id)propertyGroupsForKeys:(id)arg1;	// IMP=0x0000000000246c28
- (Class)groupClassForProperty:(id)arg1;	// IMP=0x0000000000246b55
- (void)buildPropertyGroups;	// IMP=0x000000000024683f
- (id)initWithMutableContact:(id)arg1 contactStore:(id)arg2 policy:(id)arg3 linkedPolicies:(id)arg4 prohibitedKeys:(id)arg5;	// IMP=0x000000000024672b

@end
