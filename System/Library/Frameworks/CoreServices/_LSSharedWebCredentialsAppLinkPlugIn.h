//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSSharedWebCredentialsAppLinkPlugIn
{
}

- (id)appLinksWithContext:(struct LSContext *)arg1 error:(id *)arg2;	// IMP=0x00000000000520b3
- (id)callingBundleIdentifier;	// IMP=0x0000000000052048
- (id)appLinksWithContext:(struct LSContext *)arg1 forSWCResults:(id)arg2;	// IMP=0x0000000000051986
- (void)enumerateBindingsWithContext:(struct LSContext *)arg1 forSWCResults:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000005155e
- (optional_430a8fae)bindingWithContext:(struct LSContext *)arg1 forServiceDetails:(id)arg2 callingBundleIdentifier:(id)arg3;	// IMP=0x0000000000050e56
- (id)init;	// IMP=0x0000000000050de8

@end
