import random

def four_color_theorem(graph):
    """ 🎨 Applies Four Color Theorem to a given graph representation of a map. """
    colors = ["red", "blue", "green", "yellow"]
    state_colors = {}

    for state in graph:
        # Get used colors by neighboring states
        used_colors = {state_colors[neighbor] for neighbor in graph[state] if neighbor in state_colors}
        
        # Assign the first available color
        for color in colors:
            if color not in used_colors:
                state_colors[state] = color
                break

    return state_colors

# Example USA adjacency list
usa_states = {
    "California": ["Oregon", "Nevada", "Arizona"],
    "Oregon": ["California", "Nevada"],
    "Nevada": ["California", "Oregon", "Idaho", "Utah"],
    "Arizona": ["California", "Utah", "New Mexico"],
    "New Mexico": ["Arizona", "Texas"],
    "Texas": ["New Mexico", "Oklahoma", "Louisiana"],
    "Oklahoma": ["Texas", "Kansas", "Arkansas"]
}

# Apply the Four Color Theorem
state_coloring = four_color_theorem(usa_states)

# Display results
for state, color in state_coloring.items():
    print(f"🗺️ {state} -> {color}")