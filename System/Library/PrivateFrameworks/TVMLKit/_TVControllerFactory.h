//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVControllerFactory : NSObject
{
}

- (id)_textFieldControllerForElement:(id)arg1 existingController:(id)arg2;	// IMP=0x000000000002bf39
- (id)_listControllerForElement:(id)arg1 existingController:(id)arg2;	// IMP=0x000000000002be57
- (id)_gridControllerForElement:(id)arg1 existingController:(id)arg2;	// IMP=0x000000000002bd7f
- (id)_shelfControllerForElement:(id)arg1 existingController:(id)arg2;	// IMP=0x000000000002bc15
- (id)_carouselControllerForElement:(id)arg1 layout:(id)arg2 existingController:(id)arg3;	// IMP=0x000000000002baf8
- (void)_registerControllerCreators;	// IMP=0x000000000002b6cb
- (id)init;	// IMP=0x000000000002b67f

@end

