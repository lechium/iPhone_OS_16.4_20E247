//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface CTUIListLoadingGroup : NSObject
{
    NSArray *_specifiers;	// 8 = 0x8
    PSListController *_hostController;	// 16 = 0x10
    PSSpecifier *_groupSpecifier;	// 24 = 0x18
    PSSpecifier *_spinnerSpecifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000220e2
@property(retain, nonatomic) PSSpecifier *spinnerSpecifier; // @synthesize spinnerSpecifier=_spinnerSpecifier;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
@property(retain, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
- (id)initWithHostController:(id)arg1 groupSpecifier:(id)arg2;	// IMP=0x0000000000021dcf

@end
