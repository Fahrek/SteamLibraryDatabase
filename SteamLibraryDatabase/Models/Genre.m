//
//  Genre.m
//  SteamLibraryDatabase
//
//  Created by Tim Oliver on 5/26/17.
//  Copyright © 2017 Tim Oliver. All rights reserved.
//

#import "Genre.h"
#import "Game.h"

@implementation Genre

+ (NSString *)primaryKey { return @"genreID"; }

+ (NSDictionary *)JSONInboundMappingDictionary
{
    return @{@"id" : @"genreID",
             @"description" : @"name"};
}

+ (NSDictionary *)linkingObjectsProperties {
    return @{
             @"games": [RLMPropertyDescriptor descriptorWithClass:Game.class propertyName:@"genres"],
             };
}

+ (NSDictionary *)preprocessedJSON:(NSDictionary *)dictionary
{
    // Convert ID to int
    NSMutableDictionary *dict = [dictionary mutableCopy];
    dict[@"id"] = @([dict[@"id"] intValue]);
    return dict;
}

@end
