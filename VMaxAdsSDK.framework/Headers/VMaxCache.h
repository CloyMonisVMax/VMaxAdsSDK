//
//  VMaxCache.h
//  VMaxAdSDK
//
//  Created by Cloy Monis on 28/09/20.
//  Copyright © 2020 Vserv.mobi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VMaxCache : NSObject

@property (nonatomic) NSInteger height;

@property (nonatomic) NSInteger width;

- (instancetype) initWithDictionary:(NSDictionary *)dictionary andHostVC:(UIViewController *)hostVC andVMaxAddress:(NSString *)vmaxAddress;

-(NSString*)getMarkup;

-(NSArray*)getClickTrackers;

-(void)notifyCreativeViewTrackers;

-(UIView*)getCache;

-(void)doUpdate:(NSString*)message;

@end

NS_ASSUME_NONNULL_END
