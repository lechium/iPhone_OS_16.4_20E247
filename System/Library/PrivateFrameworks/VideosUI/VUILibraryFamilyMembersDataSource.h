//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, VUIMediaAPIClient;

__attribute__((visibility("hidden")))
@interface VUILibraryFamilyMembersDataSource
{
    NSArray *_familyMembers;	// 8 = 0x8
    VUIMediaAPIClient *_mediaClient;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001c19f8
@property(retain, nonatomic) VUIMediaAPIClient *mediaClient; // @synthesize mediaClient=_mediaClient;
@property(retain, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
- (void)_orderFamilyMembersByFirstName;	// IMP=0x00000000001c188e
- (void)startFetch;	// IMP=0x00000000001c154b
- (id)init;	// IMP=0x00000000001c14c5

@end

