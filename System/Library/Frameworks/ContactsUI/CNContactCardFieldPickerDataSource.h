//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNContactCardFieldPickerDataSource : NSObject
{
    NSArray *_contacts;	// 8 = 0x8
    NSArray *_sections;	// 16 = 0x10
}

+ (id)shareableCardPropertiesForContacts:(id)arg1;	// IMP=0x001000000009e1dd
+ (_Bool)isSharingMeContactForContacts:(id)arg1;	// IMP=0x001000000009e12c
+ (id)shareableNamePropertiesForContact:(id)arg1;	// IMP=0x001000000009e04e
- (void).cxx_destruct;	// IMP=0x000000000009dfd4
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000009dee8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000009db83
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000009dae8
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000009daa4
- (long long)totalItemCount;	// IMP=0x000000000009d913
- (id)firstContactContainingPhoto;	// IMP=0x000000000009d883
- (_Bool)hasPhotoForContact:(id)arg1;	// IMP=0x000000000009d7e1
- (id)keyForIndexPath:(id)arg1;	// IMP=0x000000000009d668
- (id)itemsForKey:(id)arg1 forContact:(id)arg2;	// IMP=0x000000000009d171
- (id)itemsForKey:(id)arg1 forContacts:(id)arg2;	// IMP=0x000000000009cd86
- (id)_loadSectionsForContacts;	// IMP=0x000000000009c6f3
- (id)_loadSections;	// IMP=0x000000000009c6e1
- (id)initWithContact:(id)arg1;	// IMP=0x000000000009c5f0
- (id)initWithContacts:(id)arg1;	// IMP=0x000000000009c54c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
