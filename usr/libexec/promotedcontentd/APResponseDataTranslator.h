//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APResponseDataTranslator : NSObject
{
    id _requester;	// 8 = 0x8
    id _response;	// 16 = 0x10
}

+ (Class)translatesClass;	// IMP=0x004000000003f04c
- (void).cxx_destruct;	// IMP=0x002000000003f13b
@property(retain) id response; // @synthesize response=_response;
@property(retain) id requester; // @synthesize requester=_requester;
- (id)translate:(id *)arg1;	// IMP=0x001000000003f0ed
- (id)initWithResponse:(id)arg1 forRequester:(id)arg2;	// IMP=0x001000000003f054

@end
